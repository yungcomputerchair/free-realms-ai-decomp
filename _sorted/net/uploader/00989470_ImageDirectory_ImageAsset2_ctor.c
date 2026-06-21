// addr: 0x00989470
// name: ImageDirectory_ImageAsset2_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ImageDirectory_ImageAsset2_ctor(void * this) */

void * __fastcall ImageDirectory_ImageAsset2_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ImageDirectory::ImageAsset2 by initializing the common asset
                       base, installing the ImageAsset2 vtable, and clearing its asset payload slot.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159a418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = ImageDirectory::ImageAsset2::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

