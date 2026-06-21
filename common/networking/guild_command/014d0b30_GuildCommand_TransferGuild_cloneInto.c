// addr: 0x014d0b30
// name: GuildCommand_TransferGuild_cloneInto
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_TransferGuild_cloneInto(void * this, void * dest) */

void __thiscall GuildCommand_TransferGuild_cloneInto(void *this,void *dest)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  void *local_1c;
  void *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deep-copies GuildCommand_TransferGuild into a destination, cloning each Guild
                       object from the source vector and preserving the byte field at offset 0x18.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016abfbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = this;
  GuildCommand_cloneInto(this,dest,(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0));
  iVar6 = FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &GuildCommand_TransferGuild::RTTI_Type_Descriptor,0);
  puVar1 = *(undefined4 **)((int)this + 0x10);
  if (puVar1 < *(undefined4 **)((int)this + 0xc)) {
    FUN_00d83c2d();
  }
  puVar7 = *(undefined4 **)((int)this + 0xc);
  pvVar8 = this;
  if (*(undefined4 **)((int)this + 0x10) < puVar7) {
    FUN_00d83c2d();
  }
  while( true ) {
    if ((this == (void *)0xfffffff8) || ((int)this + 8 != (int)pvVar8 + 8)) {
      FUN_00d83c2d();
    }
    if (puVar7 == puVar1) break;
    if (this == (void *)0xfffffff8) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar7) {
      FUN_00d83c2d();
    }
    uVar2 = *puVar7;
    local_1c = Mem_Alloc(0x54);
    pvVar8 = (void *)0x0;
    local_4 = 0;
    if (local_1c != (void *)0x0) {
      pvVar8 = (void *)Guild_ctor();
    }
    local_4 = 0xffffffff;
    local_1c = pvVar8;
    FUN_014f8980(uVar2);
    uVar3 = *(uint *)(iVar6 + 0xc);
    if ((uVar3 == 0) ||
       ((uint)((int)(*(int *)(iVar6 + 0x14) - uVar3) >> 2) <=
        (uint)((int)(*(int *)(iVar6 + 0x10) - uVar3) >> 2))) {
      uVar5 = *(uint *)(iVar6 + 0x10);
      if (uVar5 < uVar3) {
        FUN_00d83c2d();
      }
      FUN_014d07c0(local_14,iVar6 + 8,uVar5,&local_1c);
    }
    else {
      puVar4 = *(undefined4 **)(iVar6 + 0x10);
      *puVar4 = pvVar8;
      *(undefined4 **)(iVar6 + 0x10) = puVar4 + 1;
    }
    if (*(undefined4 **)((int)this + 0x10) <= puVar7) {
      FUN_00d83c2d();
    }
    puVar7 = puVar7 + 1;
    pvVar8 = local_18;
  }
  *(undefined1 *)(iVar6 + 0x18) = *(undefined1 *)((int)pvVar8 + 0x18);
  ExceptionList = local_c;
  return;
}

