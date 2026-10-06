#include <3ds.h>
#include <stdio.h>

static void draw_top(void)
{
    consoleSelect(consoleGetDefault());
    consoleClear();

    printf("\x1b[2;2HSTARDEW VALLEY - N3DS");
    printf("\x1b[4;2HNative 3DS bootstrap");
    printf("\x1b[6;2HTop screen: 400 x 240");
    printf("\x1b[7;2HBottom screen: 320 x 240");
    printf("\x1b[9;2HCircle Pad / D-Pad: movement");
    printf("\x1b[10;2HA: confirm   B: back");
    printf("\x1b[11;2HX/Y: tools   L/R: shoulder");
    printf("\x1b[13;2HTouch the bottom screen");
    printf("\x1b[15;2HSTART: exit");
}

int main(void)
{
    gfxInitDefault();

    PrintConsole top;
    PrintConsole bottom;

    consoleInit(GFX_TOP, &top);
    consoleInit(GFX_BOTTOM, &bottom);

    draw_top();
    consoleSelect(&bottom);
    consoleClear();
    printf("\x1b[2;2HTOUCH UI");
    printf("\x1b[4;2HTap anywhere below.");
    printf("\x1b[6;2HTouch: --, --");
    printf("\x1b[8;2HInput: --");
    printf("\x1b[11;2HThis screen will later");
    printf("\x1b[12;2Hbe the inventory/map/UI.");

    while (aptMainLoop())
    {
        hidScanInput();

        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();

        touchPosition touch;
        hidTouchRead(&touch);

        if (kDown & KEY_START)
            break;

        consoleSelect(&top);
        printf("\x1b[18;2HButtons: 0x%08lX", (unsigned long)kHeld);

        consoleSelect(&bottom);
        printf("\x1b[6;2HTouch: %3u, %3u   ", touch.px, touch.py);
        printf("\x1b[8;2HInput: 0x%08lX   ", (unsigned long)kDown);

        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
