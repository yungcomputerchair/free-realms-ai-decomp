// addr: 0x010034b0
// name: VideoCapture_ReinitEncoderParams_copyCtor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_ReinitEncoderParams_copyCtor(void * this, void * settings)
    */

void * __thiscall VideoCapture_ReinitEncoderParams_copyCtor(void *this,void *settings)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* Constructs ReinitEncoderParams by installing FuncParams then
                       ReinitEncoderParams vtables and copying 0x1a dwords of settings into the
                       object. Evidence: explicit VideoCapture::ReinitEncoderParams vtable. */
  *(undefined ***)this = VideoCapture::FuncParams::vftable;
  *(undefined ***)this = VideoCapture::ReinitEncoderParams::vftable;
  puVar2 = (undefined4 *)((int)this + 8);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)settings;
    settings = (undefined4 *)((int)settings + 4);
    puVar2 = puVar2 + 1;
  }
  return this;
}

