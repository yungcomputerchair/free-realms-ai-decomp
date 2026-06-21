// addr: 0x0079b510
// name: ActorGroupDefinitionAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorGroupDefinitionAsset_ctor(void * this) */

void * __fastcall ActorGroupDefinitionAsset_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an ActorGroupDefinitionAsset, clearing its base asset field and
                       initializing two embedded members after installing the vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155b981;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *(undefined ***)this = ActorGroupDefinitionAsset::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  FUN_0079aa00();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00799cd0();
  ExceptionList = local_c;
  return this;
}

