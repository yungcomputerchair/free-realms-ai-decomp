// addr: 0x014d3060
// name: GuildCommand_Notify_cloneInto
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandNotify.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Notify_cloneInto(void * param_1, void * param_2) */

void __thiscall GuildCommand_Notify_cloneInto(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies GuildCommand_Notify into an existing clone target, including scalar
                       fields and optional heap-owned subobjects. RTTI and the
                       GuildCommandNotify.cpp clone assertion identify the class and clone-copy
                       method. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ac826;
  local_c = ExceptionList;
  pvVar1 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar2 = (void *)FUN_00d8d382(param_1,0,&NetworkCommand::RTTI_Type_Descriptor,
                                &GuildCommand_Notify::RTTI_Type_Descriptor,0);
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\guild_command\\GuildCommandNotify.cpp",0x74);
  }
  GuildCommand_cloneInto(this,pvVar2,pvVar1);
  *(undefined4 *)((int)pvVar2 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)pvVar2 + 0xc) = *(undefined1 *)((int)this + 0xc);
  *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)((int)this + 0x10);
  if (*(int *)((int)this + 0x14) != 0) {
    if (*(int *)((int)pvVar2 + 0x14) == 0) {
      pvVar1 = Mem_Alloc(0xc);
      uStack_4 = 0;
      if (pvVar1 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_012fa910();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x14) = uVar3;
    }
    FUN_013010e0(*(undefined4 *)((int)this + 0x14));
  }
  if (*(int *)((int)this + 0x18) != 0) {
    if (*(int *)((int)pvVar2 + 0x18) == 0) {
      pvVar1 = Mem_Alloc(0xc);
      uStack_4 = 1;
      if (pvVar1 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_012fa910();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x18) = uVar3;
    }
    FUN_013010e0(*(undefined4 *)((int)this + 0x18));
  }
  ExceptionList = local_c;
  return;
}

