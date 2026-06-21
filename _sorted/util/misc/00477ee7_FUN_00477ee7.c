// addr: 0x00477ee7
// name: FUN_00477ee7
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_00477ee7(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
                    /* Allocates or finds a ushort id in a container, stores it into a 0x20-byte
                       record, optionally creates/attaches a resource via a manager at 0x98, and
                       returns success. No class/file evidence, so left unnamed. */
  piVar1 = param_2;
  cVar2 = FUN_0046ca8d(param_3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    piVar5 = (int *)FUN_0046ab0a(local_1c,&param_2);
    local_c = *piVar5;
    local_8 = piVar5[1];
    FUN_0045d4f4(*(undefined4 *)(param_1 + 0x40),param_1 + 0x3c);
    cVar2 = FUN_0045c7c9(local_14);
    if (cVar2 == '\0') {
      iVar8 = FUN_0045d518();
      uVar4 = *(ushort *)(iVar8 + 4);
    }
    else {
      uVar6 = FUN_0045c293();
      if (0xfffe < uVar6) {
        return 0;
      }
      uVar4 = FUN_0045c293();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
      }
      param_3 = piVar1;
      FUN_00474947(&param_3);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(0);
      }
      puVar7 = (uint *)FUN_004749c9(&param_2);
      *puVar7 = (uint)uVar4;
    }
    FUN_00477e05(&local_c,8,0);
    iVar10 = local_8 * 0x20 + local_c;
    *(ushort *)(iVar10 + 2) = uVar4;
    iVar8 = *(int *)(param_1 + 0x98);
    if (iVar8 != 0) {
      iVar9 = FUN_00466ce6();
      *(int *)(iVar10 + 0xc) = iVar9;
      if (iVar9 != 0) {
        FUN_004dbd55(iVar8);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

