// addr: 0x00d0efc0
// name: ImageCapture_PNG_PNGEncoder_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ImageCapture_PNG_PNGEncoder_ctor(void * this) */

void __fastcall ImageCapture_PNG_PNGEncoder_ctor(void *this)

{
                    /* Constructs a PNG encoder by installing ImageCapture::IEncoder then
                       ImageCapture::PNG::PNGEncoder vtables and clearing encoder state fields.
                       Evidence: explicit vtable symbols in the decompile. */
  *(undefined ***)this = ImageCapture::IEncoder::vftable;
  *(undefined ***)this = ImageCapture::PNG::PNGEncoder::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}

