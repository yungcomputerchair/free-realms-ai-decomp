// addr: 0x00d1ef10
// name: VideoCapture_JPG_selectScaleConvertRoutine
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_JPG_selectScaleConvertRoutine(int * frameSettings) */

void * __cdecl VideoCapture_JPG_selectScaleConvertRoutine(int *frameSettings)

{
  int iVar1;
  
                    /* Selects a conversion/scaling routine based on source/destination dimensions,
                       pixel format, and a boolean conversion flag. Evidence:
                       VideoCapture_JPG_importFrame calls it when the decoded frame dimensions
                       differ before queueing buffer work. */
  iVar1 = *frameSettings;
  if (frameSettings[2] == 3) {
    if ((char)frameSettings[0x12] == '\0') {
      if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
        return &LAB_00d10150;
      }
      return FUN_00d13ed0;
    }
    if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
      return FUN_00d10170;
    }
    return FUN_00d110b0;
  }
  if ((char)frameSettings[0x12] == '\0') {
    if (frameSettings[0x11] == 0) {
      if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
        return (void *)0x0;
      }
      return FUN_00d1d0e0;
    }
    if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
      return &LAB_00d104e0;
    }
    return FUN_00d1adb0;
  }
  if (frameSettings[0x11] == 0) {
    if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
      return FUN_00d101c0;
    }
    return FUN_00d18f60;
  }
  if ((iVar1 == frameSettings[7]) && (frameSettings[1] == frameSettings[8])) {
    return &LAB_00d10470;
  }
  return FUN_00d16cc0;
}

