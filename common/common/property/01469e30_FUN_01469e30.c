// addr: 0x01469e30
// name: FUN_01469e30
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeTargetPlayer(void * this, void * stream) */

bool __thiscall GameCommand_deserializeTargetPlayer(void *this,void *stream)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iStack_4c;
  int aiStack_48 [2];
  int iStack_40;
  int *local_3c;
  int iStack_38;
  int *piStack_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes a game command, resolves a target player element, and validates
                       it against current state. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0169e508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_3c,DAT_01b839d8 ^ (uint)&stack0xffffffa4)
  ;
  if ((((cVar2 != '\0') && (bVar3 = StateMachineState_deserializeWithPlayer(this,stream), bVar3)) &&
      (cVar2 = (**(code **)(*(int *)((int)this + 0xf8) + 0x24))(stream), cVar2 != '\0')) &&
     (bVar3 = Deserializer_readInteger(stream,aiStack_48), bVar3)) {
    *(int *)((int)this + 0x104) = aiStack_48[0];
    pvStack_20 = (void *)0x0;
    uStack_1c = 0;
    uStack_18 = 0;
    local_c = (void *)0x0;
    bVar3 = Deserializer_readIntegerVector(&stack0xffffffac,auStack_24);
    if (bVar3) {
      piVar5 = (int *)FUN_0041f5d2(&iStack_40);
      iStack_38 = *piVar5;
      piStack_34 = (int *)piVar5[1];
      piVar5 = (int *)FUN_0041f3a1(&stack0xffffffac);
      iStack_40 = *piVar5;
      local_3c = (int *)piVar5[1];
      while( true ) {
        piVar5 = local_3c;
        iVar8 = iStack_40;
        if ((iStack_40 == 0) || (iStack_40 != iStack_38)) {
          FUN_00d83c2d();
        }
        if (piVar5 == piStack_34) break;
        if (iVar8 == 0) {
          FUN_00d83c2d();
        }
        if (*(int **)(iVar8 + 8) <= piVar5) {
          FUN_00d83c2d();
        }
        iVar8 = *piVar5;
        pvVar6 = (void *)StateMachineState_getGame();
        pvVar6 = PlayArea_findPlayerElementById(pvVar6,iVar8);
        if (pvVar6 == (void *)0x0) goto LAB_01469ed4;
        FUN_01336350(&stack0xffffffac);
        FUN_012fb740(auStack_30,0);
      }
      bVar3 = Deserializer_readInteger(stream,&iStack_4c);
      if (bVar3) {
        if (iStack_4c < 0) {
          puVar7 = (undefined4 *)FUN_01469400(auStack_30);
          *(undefined4 *)((int)this + 0x118) = *puVar7;
          *(undefined4 *)((int)this + 0x11c) = puVar7[1];
          *(undefined4 *)((int)this + 0x120) = puVar7[2];
        }
        else {
          iVar8 = 0;
          puVar7 = (undefined4 *)FUN_014693d0(auStack_30);
          *(undefined4 *)((int)this + 0x118) = *puVar7;
          *(undefined4 *)((int)this + 0x11c) = puVar7[1];
          *(undefined4 *)((int)this + 0x120) = puVar7[2];
          while( true ) {
            uVar1 = *(uint *)((int)this + 0x10c);
            if (*(uint *)((int)this + 0x110) < uVar1) {
              FUN_00d83c2d();
            }
            if ((*(int *)((int)this + 0x11c) == 0) ||
               (*(int *)((int)this + 0x11c) != (int)this + 0x108)) {
              FUN_00d83c2d();
            }
            stream = pvStack_4;
            if ((*(uint *)((int)this + 0x120) == uVar1) || (iVar8 == iStack_4c)) break;
            iVar8 = iVar8 + 1;
            FUN_01469460(auStack_30,0);
          }
        }
        bVar3 = Serializer_appendInteger(stream,*(uint *)((int)this + 0x124));
        if (!bVar3) {
          local_c = (void *)0xffffffff;
          if (pvStack_20 == (void *)0x0) {
            ExceptionList = pvStack_14;
            return false;
          }
                    /* WARNING: Subroutine does not return */
          _free(pvStack_20);
        }
        uVar4 = (**(code **)(*(int *)this + 0x14))(stream);
        local_c = (void *)0xffffffff;
        if (pvStack_20 == (void *)0x0) {
          ExceptionList = pvStack_14;
          return (bool)uVar4;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_20);
      }
    }
LAB_01469ed4:
    local_c = (void *)0xffffffff;
    StdVector_clearStorage(auStack_24);
  }
  ExceptionList = pvStack_14;
  return false;
}

