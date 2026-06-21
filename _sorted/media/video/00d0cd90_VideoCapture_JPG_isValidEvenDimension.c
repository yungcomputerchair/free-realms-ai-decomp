// addr: 0x00d0cd90
// name: VideoCapture_JPG_isValidEvenDimension
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool VideoCapture_JPG_isValidEvenDimension(int dimension_) */

bool __cdecl VideoCapture_JPG_isValidEvenDimension(int dimension_)

{
                    /* Returns true only for even dimensions greater than one. Evidence:
                       VideoCapture_JPG_validateImageSettings uses it to validate image width/height
                       style fields. */
  if ((1 < dimension_) && ((dimension_ & 1U) == 0)) {
    return true;
  }
  return false;
}

