// addr: 0x00c8a220
// name: MembershipIsActiveDataSourceHolder_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MembershipIsActiveDataSourceHolder_ctor(void * this) */

void * __fastcall MembershipIsActiveDataSourceHolder_ctor(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates the BaseClient.Membership.IsActive data source, assigns it into a
                       ref-counted slot, and returns the holder. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01605b33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x54);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GuiDsValue_ctor("BaseClient.Membership.IsActive");
  }
  local_4 = 0xffffffff;
  *(undefined4 *)this = 0;
  FUN_00c8a080(uVar2);
  ExceptionList = local_c;
  return this;
}

