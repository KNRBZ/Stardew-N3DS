#include <3ds.h>
#include <stdio.h>

int main(void)
{
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    printf("\x1b[2;2HStardew Valley - N3DS\n");
    printf("\x1b[4;2HPort bootstrap online.\n");
    printf("\x1b[6;2HTop: 400x240 gameplay target\n");
    printf("\x1b[7;2HBottom: 320x240 touch UI target\n");
    printf("\x1b[9;2HWaiting for game integration...\n");

    while (aptMainLoop())
    {
        hidScanInput();

        u32 kDown = hidKeysDown();
        if (kDown & KEY_START)
            break;

        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
