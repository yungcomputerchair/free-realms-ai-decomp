// addr: 0x00d0fc90
// name: VideoCapture_JPG_bytesPerPixelForFormat
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_JPG_bytesPerPixelForFormat(int format_) */

int __cdecl VideoCapture_JPG_bytesPerPixelForFormat(int format_)

{
                    /* Maps image format ids to bytes-per-pixel/stride units: formats 1 and 3 return
                       3, format 2 returns 4, otherwise -1. Evidence:
                       VideoCapture_JPG_validateImageSettings stores the result and uses it in
                       row-size calculations. */
  if (format_ != 1) {
    if (format_ == 2) {
      return 4;
    }
    if (format_ != 3) {
      return -1;
    }
  }
  return 3;
}

