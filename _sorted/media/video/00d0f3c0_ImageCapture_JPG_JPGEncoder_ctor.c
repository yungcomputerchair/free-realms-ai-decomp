// addr: 0x00d0f3c0
// name: ImageCapture_JPG_JPGEncoder_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ImageCapture_JPG_JPGEncoder_ctor(void * this) */

void * __fastcall ImageCapture_JPG_JPGEncoder_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a JPG encoder by installing ImageCapture::IEncoder then
                       ImageCapture::JPG::JPGEncoder vtables and initializing JPG encoder storage.
                       Evidence: explicit vtable symbols in the decompiled constructor. */
  puStack_8 = &LAB_01612ac4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = ImageCapture::IEncoder::vftable;
  *(undefined ***)this = ImageCapture::JPG::JPGEncoder::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 1;
  FUN_00d10dd0(uVar1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  ExceptionList = local_c;
  return this;
}

