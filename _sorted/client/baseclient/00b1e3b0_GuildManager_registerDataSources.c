// addr: 0x00b1e3b0
// name: GuildManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildManager_registerDataSources(void * this) */

void __thiscall GuildManager_registerDataSources(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates GuildDataSource and GuildMemberDataSource and attaches them through
                       nearby guild manager helpers while player data is deserialized. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d1c46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b18f70(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  *(void **)((int)this + 0x8c) = in_stack_00000004;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00b1e2b0();
  *(undefined4 *)((int)this + 0x254) = 0;
  local_4._0_1_ = 3;
  pvVar1 = Mem_Alloc(0x270);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GuildMemberDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 600) = 0;
  FUN_00b17a00(pvVar1);
  local_4._0_1_ = 5;
  *(undefined1 *)((int)this + 0x25c) = 0;
  pvVar1 = Mem_Alloc(0x25c);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GuildDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00b17820(pvVar1);
  ExceptionList = local_c;
  return;
}

