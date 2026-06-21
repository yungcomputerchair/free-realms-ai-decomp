// addr: 0x00d0cd10
// name: VideoCapture_JPG_isValidFloatSetting
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: bool VideoCapture_JPG_isValidFloatSetting(float * setting) */

bool __cdecl VideoCapture_JPG_isValidFloatSetting(float *setting)

{
                    /* Checks that a floating JPG/image setting lies within two global bounds.
                       Evidence: VideoCapture_JPG_validateImageSettings calls it on settings[15]
                       before accepting derived output dimensions. */
  if ((_DAT_0183e440 <= *setting) && (*setting <= DAT_0183e43c)) {
    return true;
  }
  return false;
}

