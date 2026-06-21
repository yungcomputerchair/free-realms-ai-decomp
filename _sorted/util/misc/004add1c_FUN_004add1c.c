// addr: 0x004add1c
// name: FUN_004add1c
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_004add1c(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_1c [8];
  undefined1 local_14 [12];
  int local_8;
  
                    /* Iterates two owned containers and invokes owner vtable callbacks at 0x140 and
                       0x120 for child/item records, then finalizes with a cleanup call. No
                       class/file evidence, so left unnamed. */
  FUN_00483a11(*(undefined4 *)(*param_1 + 0x30),*param_1 + 0x2c);
  while( true ) {
    FUN_00483a11(*(undefined4 *)(*param_1 + 0x34),*param_1 + 0x2c);
    cVar1 = FUN_00483583(local_14);
    if (cVar1 != '\0') break;
    piVar2 = (int *)FUN_00483562();
    if (*(int *)(*piVar2 + 0x34) != 0) {
      piVar2 = (int *)FUN_00483562();
      puVar3 = (undefined4 *)FUN_00483562();
      (**(code **)(*(int *)param_1[1] + 0x140))(*(undefined4 *)*puVar3,*piVar2 + 0x30);
    }
    FUN_00483a41();
  }
  piVar2 = param_1 + 3;
  FUN_00492c7e(param_1[4],piVar2);
  FUN_00492c7e(param_1[5],piVar2);
  cVar1 = FUN_004835dd(local_1c);
  while (cVar1 == '\0') {
    iVar4 = FUN_00483a77();
    local_8 = FUN_00483a77();
    uVar5 = FUN_00483a77();
    (**(code **)(*(int *)param_1[1] + 0x120))
              (uVar5,*(undefined4 *)(local_8 + 0x1000),*(undefined4 *)(iVar4 + 0x1004),0x300);
    FUN_00483a98();
    FUN_00492c7e(param_1[5],piVar2);
    cVar1 = FUN_004835dd(local_1c);
  }
  FUN_004ac0fb();
  return;
}

