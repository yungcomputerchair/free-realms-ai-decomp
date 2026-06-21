// addr: 0x0051daad
// name: DelegateList_invokeCallbacks
// subsystem: common/util/delegate
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DelegateList_invokeCallbacks(int this_, void * argument) */

bool __thiscall DelegateList_invokeCallbacks(void *this,int this_,void *argument)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Copies the current delegate vector, then for each copied 32-byte callback
                       record finds a still-registered matching record and invokes its function
                       pointer with the supplied argument and stored target/context. The
                       copy-before-iterate pattern avoids problems if callbacks mutate the list. */
  iVar1 = (int)this + 4;
  FUN_00427ac0(iVar1);
  FUN_00416fad(local_38,local_3c);
  local_c = local_24;
  local_8 = local_20;
  FUN_00416fad(local_34,local_3c);
  cVar3 = FUN_004cef4d(&local_24);
  do {
    if (cVar3 != '\0') {
      FUN_0042213e();
      return true;
    }
    FUN_00416fad(*(undefined4 *)((int)this + 8),iVar1);
    local_14 = local_2c;
    local_10 = local_28;
    while( true ) {
      FUN_00416fad(*(undefined4 *)((int)this + 0xc),iVar1);
      cVar3 = FUN_004cef4d(local_1c);
      if (cVar3 != '\0') break;
      piVar4 = (int *)FUN_004ce147();
      piVar5 = (int *)FUN_004ce147();
      if (((((piVar5[2] == piVar4[2]) && (*piVar5 == *piVar4)) && (piVar5[1] == piVar4[1])) &&
          (piVar5[4] == piVar4[4])) &&
         ((piVar5[4] == 0 ||
          (((piVar5[5] == piVar4[5] && (piVar5[6] == piVar4[6])) && (piVar5[7] == piVar4[7])))))) {
        iVar6 = FUN_004ce147();
        if (*(int *)(iVar6 + 8) == 1) {
          iVar6 = FUN_004ce147();
          pcVar2 = *(code **)(iVar6 + 0x10);
          iVar6 = FUN_004ce147();
          FUN_004ce147();
          (*pcVar2)(this_,*(undefined4 *)(iVar6 + 4));
        }
        else {
          iVar6 = FUN_004ce147();
          iVar7 = FUN_004ce147();
          (**(code **)(iVar7 + 0x10))(this_,*(undefined4 *)(iVar6 + 4));
        }
        break;
      }
      FUN_004cef29();
    }
    FUN_004cef29();
    FUN_00416fad(local_34,local_3c);
    cVar3 = FUN_004cef4d(&local_24);
  } while( true );
}

