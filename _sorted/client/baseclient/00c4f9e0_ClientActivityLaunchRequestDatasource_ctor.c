// addr: 0x00c4f9e0
// name: ClientActivityLaunchRequestDatasource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientActivityLaunchRequestDatasource_ctor(void * this, void * owner)
    */

void * __thiscall ClientActivityLaunchRequestDatasource_ctor(void *this,void *owner)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientActivityLaunchRequestDatasource, installs vtables,
                       initializes inherited list/hash data via helper, and stores launch context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fdb46;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  local_4 = 0;
  *(undefined ***)this = ClientActivityLaunchRequestDatasource::vftable;
  *(undefined ***)((int)this + 0x30) = ClientActivityLaunchRequestDatasource::vftable;
  *(undefined ***)((int)this + 0x34) = ClientActivityLaunchRequestDatasource::vftable;
  FUN_009c8720(uVar1);
  *(undefined4 *)((int)this + 0x368) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

