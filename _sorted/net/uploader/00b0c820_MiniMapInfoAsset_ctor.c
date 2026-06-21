// addr: 0x00b0c820
// name: MiniMapInfoAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MiniMapInfoAsset_ctor(void * this) */

void * __fastcall MiniMapInfoAsset_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a MiniMapInfoAsset by initializing the common asset base,
                       installing the MiniMapInfoAsset vtable, and clearing its data slot. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cf2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = MiniMapInfoAsset::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

