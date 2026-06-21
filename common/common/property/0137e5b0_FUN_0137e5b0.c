// addr: 0x0137e5b0
// name: FUN_0137e5b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_executeArchetypeAction(void * this, void * ctx, int
   archetypeId_, void * args) */

bool __thiscall
DisplayAction_executeArchetypeAction(void *this,void *ctx,int archetypeId_,void *args)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  int3 iStack_3c;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined1 local_1c [4];
  void *pvStack_18;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
                    /* Resolves an archetype and display/action data, then executes or builds
                       actions for the target context. */
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_01682148;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  if (archetypeId_ == 0) {
    DisplayActionManager_ensureSingleton();
    iVar4 = FUN_012d08e0();
    if (iVar4 != 0) {
      archetypeId_ = FUN_013a3480();
    }
  }
  (**(code **)(*(int *)this + 0xdc))(local_1c,args,archetypeId_,uVar3);
  uStack_10 = 0;
  if ((puStack_24 == (undefined4 *)0x0) || ((int)puStack_20 - (int)puStack_24 >> 2 == 0)) {
    uStack_10 = 0xffffffff;
    if (puStack_24 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_24);
    }
    uVar2 = 0;
  }
  else {
    puStack_4 = puStack_20;
    if (puStack_20 < puStack_24) {
      FUN_00d83c2d();
    }
    FUN_005258fb();
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    puVar5 = puStack_24;
    if (puStack_20 < puStack_24) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x28) {
        FUN_00d83c2d();
      }
      if (puVar5 == puStack_4) break;
      if (&stack0x00000000 == (undefined1 *)0x28) {
        FUN_00d83c2d();
      }
      if (puStack_20 <= puVar5) {
        FUN_00d83c2d();
      }
      uVar1 = *puVar5;
      ArchetypeDB_getInstance();
      iVar4 = ArchetypeDB_getArchetype(uVar1,*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar4 != 0) {
        FUN_012fa910();
        uStack_10 = CONCAT31(uStack_10._1_3_,2);
        (**(code **)(*(int *)(iVar4 + 4) + 4))(2,&stack0xffffffc0);
        if (iStack_3c == 2) {
          unaff_ESI = 0x1000000;
          FUN_01300680(6);
          FUN_0042c155(&stack0x00000000);
        }
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
        FUN_01300cd0();
      }
      if (puStack_20 <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    uStack_10 = uStack_10 & 0xffffff00;
    FUN_00521a9c();
    uStack_10 = 0xffffffff;
    if (puStack_24 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_24);
    }
    uVar2 = (undefined1)((uint)unaff_ESI >> 0x18);
  }
  ExceptionList = pvStack_18;
  return (bool)uVar2;
}

