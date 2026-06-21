// addr: 0x00c4fa90
// name: ClientActivityLaunchMembersDatasource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActivityLaunchMembersDatasource_ctor(void * this, void * owner)
    */

void * __thiscall ClientActivityLaunchMembersDatasource_ctor(void *this,void *owner)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientActivityLaunchMembersDatasource, installs vtables,
                       initializes member storage via helper, stores context, and sets an enabled
                       flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fdb86;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  local_4 = 0;
  *(undefined ***)this = ClientActivityLaunchMembersDatasource::vftable;
  *(undefined ***)((int)this + 0x30) = ClientActivityLaunchMembersDatasource::vftable;
  *(undefined ***)((int)this + 0x34) = ClientActivityLaunchMembersDatasource::vftable;
  FUN_00c4f7e0(uVar1);
  *(undefined4 *)((int)this + 0x368) = in_stack_00000008;
  *(undefined1 *)((int)this + 0x36c) = 1;
  ExceptionList = local_c;
  return this;
}

