// addr: 0x00d0ce80
// name: VideoCapture_JPG_validateImageSettings
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool VideoCapture_JPG_validateImageSettings(void * settings) */

bool __fastcall VideoCapture_JPG_validateImageSettings(void *settings)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
                    /* Validates image/capture settings, computes bytes-per-pixel, aligned frame
                       sizes, and optional scaled dimensions. Returns true only when dimensions and
                       format fields are acceptable. */
  if (((((*(int *)settings - 1U < 3) && (*(int *)((int)settings + 0x28) - 1U < 2)) &&
       (1 < (int)*(uint *)((int)settings + 8))) &&
      (((*(uint *)((int)settings + 8) & 1) == 0 && (1 < (int)*(uint *)((int)settings + 0xc))))) &&
     ((*(uint *)((int)settings + 0xc) & 1) == 0)) {
    iVar4 = VideoCapture_JPG_bytesPerPixelForFormat(*(int *)settings);
    iVar1 = *(int *)((int)settings + 8);
    uVar2 = *(uint *)((int)settings + 0x2c);
    *(int *)((int)settings + 0x10) = iVar4;
    *(uint *)((int)settings + 0x14) =
         (iVar1 * iVar4 + 3U & 0xfffffffc) * *(int *)((int)settings + 0xc);
    if ((1 < (int)uVar2) && ((uVar2 & 1) == 0)) {
      if (*(int *)((int)settings + 0x30) == 0) {
        *(uint *)((int)settings + 0x30) =
             (int)(((float)*(int *)((int)settings + 0xc) / (float)iVar1) * (float)(int)uVar2) + 1U &
             0xfffffffe;
      }
      bVar3 = VideoCapture_JPG_isValidEvenDimension(*(int *)((int)settings + 0x30));
      if (bVar3) {
        bVar3 = VideoCapture_JPG_isValidFloatSetting((float *)((int)settings + 0x3c));
        if (bVar3) {
          if (*(char *)((int)settings + 0x40) == '\0') {
            iVar5 = *(int *)((int)settings + 0xc);
            *(int *)((int)settings + 0x18) = iVar1;
          }
          else {
            iVar5 = *(int *)((int)settings + 0x30);
            *(uint *)((int)settings + 0x18) = uVar2;
          }
          *(int *)((int)settings + 0x20) = iVar4;
          *(int *)((int)settings + 0x1c) = iVar5;
          *(uint *)((int)settings + 0x24) =
               (*(int *)((int)settings + 0x18) * iVar4 + 3U & 0xfffffffc) * iVar5;
          return true;
        }
      }
    }
    return false;
  }
  return false;
}

