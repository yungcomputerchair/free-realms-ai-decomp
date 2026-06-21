// addr: 0x014cc5f0
// name: LobbyCommand_BulkJoin_cloneInto
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandBulkJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_BulkJoin_cloneInto(void * this, void * dest) */

void __thiscall LobbyCommand_BulkJoin_cloneInto(void *this,void *dest)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *lobbyCommand;
  void *thisObj;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int *apiStack_1c [2];
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies this BulkJoin command into an existing destination command after
                       RTTI-checking that the destination is LobbyCommand_BulkJoin; clones strings,
                       vectors, and per-entry allocated objects. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ab6ab;
  local_c = ExceptionList;
  lobbyCommand = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  thisObj = (void *)FUN_00d8d382(dest,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &LobbyCommand_BulkJoin::RTTI_Type_Descriptor,0);
  if (thisObj == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\lobby_command\\LobbyCommandBulkJoin.cpp",0xb3);
  }
  LobbyCommand_cloneInto(this,thisObj,lobbyCommand);
  pvVar4 = (void *)((int)thisObj + 8);
  if (pvVar4 != (void *)((int)this + 8)) {
    FUN_01308260(apiStack_1c,pvVar4,**(undefined4 **)((int)thisObj + 0xc),pvVar4,
                 *(undefined4 **)((int)thisObj + 0xc));
    LobbyCommand_BulkJoin_copyTreeMember(pvVar4,(void *)((int)this + 8),lobbyCommand);
  }
  *(undefined4 *)((int)thisObj + 0x14) = *(undefined4 *)((int)this + 0x14);
  FUN_005f1e5c((int)this + 0x18);
  StdVector28_assign((int)this + 0x28);
  StdVector28_assign((int)this + 0x48);
  piVar6 = *(int **)((int)this + 0x60);
  apiStack_1c[0] = piVar6;
  if (piVar6 < *(int **)((int)this + 0x5c)) {
    FUN_00d83c2d();
  }
  piVar5 = *(int **)((int)this + 0x5c);
  if (*(int **)((int)this + 0x60) < piVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffa8) {
      FUN_00d83c2d();
    }
    if (piVar5 == piVar6) break;
    dest = Mem_Alloc(0x10);
    uStack_4 = 0;
    if (dest == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = PropertySet_ctor(dest);
    }
    uStack_4 = 0xffffffff;
    dest = pvVar4;
    if (this == (void *)0xffffffa8) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x60) <= piVar5) {
      FUN_00d83c2d();
    }
    PropertySet_copyPropertiesFrom(*piVar5);
    uVar1 = *(uint *)((int)thisObj + 0x5c);
    if ((uVar1 == 0) ||
       ((uint)((int)(*(int *)((int)thisObj + 100) - uVar1) >> 2) <=
        (uint)((int)(*(int *)((int)thisObj + 0x60) - uVar1) >> 2))) {
      uVar3 = *(uint *)((int)thisObj + 0x60);
      if (uVar3 < uVar1) {
        FUN_00d83c2d();
      }
      FUN_014cb2c0(auStack_14,(int)thisObj + 0x58,uVar3,&dest);
    }
    else {
      puVar2 = *(undefined4 **)((int)thisObj + 0x60);
      *puVar2 = pvVar4;
      *(undefined4 **)((int)thisObj + 0x60) = puVar2 + 1;
    }
    if (*(int **)((int)this + 0x60) <= piVar5) {
      FUN_00d83c2d();
    }
    piVar5 = piVar5 + 1;
    piVar6 = apiStack_1c[0];
  }
  StdVectorDword_assignFromVector((void *)((int)thisObj + 0x38),(int)this + 0x38,(int)lobbyCommand);
  StdVectorInt_assignFromVector((void *)((int)thisObj + 0x68),(int)this + 0x68,(int)lobbyCommand);
  ExceptionList = local_c;
  return;
}

