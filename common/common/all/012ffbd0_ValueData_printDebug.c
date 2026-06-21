// addr: 0x012ffbd0
// name: ValueData_printDebug
// subsystem: common/common/all
// source (binary assert): common/common/all/ValueData.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueData_printDebug(void * this, void * output) */

void __thiscall ValueData_printDebug(void *this,void *output)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  int local_38 [2];
  int local_30 [2];
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats the current ValueData type and payload to the supplied output sink,
                       including booleans, integers, strings, integer/string lists, and int maps. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675a88;
  local_c = ExceptionList;
  uVar7 = DAT_01b839d8 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_c;
  uVar1 = *(undefined4 *)((int)this + 4);
  switch(uVar1) {
  case 1:
    FUN_0123c370();
    Game_logGeneral(output,"Type was boolean (%d), value was %d\n",uVar1);
    break;
  case 2:
    FUN_0123c340();
    Game_logGeneral(output,"Type was integer (%d), value was %d\n",uVar1);
    break;
  case 3:
    FUN_0123c310();
    Game_logGeneral(output,"Type was string (%d), value was \"%s\"\n",*(undefined4 *)((int)this + 4)
                   );
    break;
  default:
    FUN_012f5a60("!\"Failed switch:.\"","..\\common\\common\\all\\ValueData.cpp",0x344);
    break;
  case 6:
    Game_logGeneral(output,"Type was IntegerList (%d), values: ",uVar1);
    piVar8 = (int *)FUN_0041f5d2(local_48);
    puVar2 = (undefined4 *)piVar8[1];
    iVar5 = *piVar8;
    piVar8 = (int *)FUN_0041f3a1(local_40);
    iVar4 = *piVar8;
    puVar10 = (undefined4 *)piVar8[1];
    while( true ) {
      if ((iVar4 == 0) || (iVar4 != iVar5)) {
        FUN_00d83c2d();
      }
      if (puVar10 == puVar2) break;
      if (iVar4 == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar4 + 8) <= puVar10) {
        FUN_00d83c2d();
      }
      Game_logGeneral(output,"%d, ",*puVar10);
      if (*(undefined4 **)(iVar4 + 8) <= puVar10) {
        FUN_00d83c2d();
      }
      puVar10 = puVar10 + 1;
    }
    goto LAB_012ffd06;
  case 7:
    Game_logGeneral(output,"Type was IntegerList (%d), values: ",uVar1);
    piVar8 = StdStringVector_makeEndIterator(*(void **)((int)this + 8),local_38);
    uVar3 = piVar8[1];
    iVar5 = *piVar8;
    piVar8 = StdStringVector_makeBeginIterator(*(void **)((int)this + 8),local_30);
    iVar4 = *piVar8;
    uVar11 = piVar8[1];
    while( true ) {
      if ((iVar4 == 0) || (iVar4 != iVar5)) {
        FUN_00d83c2d();
      }
      if (uVar11 == uVar3) break;
      if (iVar4 == 0) {
        FUN_00d83c2d();
      }
      if (*(uint *)(iVar4 + 8) <= uVar11) {
        FUN_00d83c2d();
      }
      if (*(uint *)(uVar11 + 0x18) < 0x10) {
        iVar9 = uVar11 + 4;
      }
      else {
        iVar9 = *(int *)(uVar11 + 4);
      }
      Game_logGeneral(output,"%s, ",iVar9);
      if (*(uint *)(iVar4 + 8) <= uVar11) {
        FUN_00d83c2d();
      }
      uVar11 = uVar11 + 0x1c;
    }
    goto LAB_012ffd06;
  case 0xd:
    Game_logGeneral(output,"Type was IntIntMapTypeID (%d), values: ",uVar1);
    iVar5 = *(int *)((int)this + 8);
    piVar8 = *(int **)(iVar5 + 4);
    piVar6 = (int *)*piVar8;
    while( true ) {
      if (iVar5 == 0) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar8) break;
      if (iVar5 == 0) {
        FUN_00d83c2d();
      }
      if ((piVar6 == (int *)*(int *)(iVar5 + 4)) &&
         (FUN_00d83c2d(), piVar6 == (int *)*(int *)(iVar5 + 4))) {
        FUN_00d83c2d();
      }
      Game_logGeneral(output,"(%d, %d) ",piVar6[3]);
      FUN_004d21f9();
    }
LAB_012ffd06:
    Game_logGeneral(output,".\n",uVar7);
    break;
  case 0xe:
    Game_logGeneral(output,"Type was IntValueMapTypeID (%d), values: ",uVar1);
    iVar5 = *(int *)((int)this + 8);
    piVar8 = *(int **)(iVar5 + 4);
    piVar6 = (int *)*piVar8;
    while( true ) {
      if (iVar5 == 0) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar8) break;
      if (iVar5 == 0) {
        FUN_00d83c2d();
      }
      if (piVar6 == (int *)*(int *)(iVar5 + 4)) {
        FUN_00d83c2d();
      }
      ValueData_toString((void *)piVar6[4],local_28);
      local_4 = 0;
      if (piVar6 == (int *)*(int *)(iVar5 + 4)) {
        FUN_00d83c2d();
      }
      Game_logGeneral(output,"(%d, %s) ",piVar6[3]);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      FUN_012af3e0();
    }
    Game_logGeneral(output,".\n",uVar7);
  }
  ExceptionList = local_c;
  return;
}

