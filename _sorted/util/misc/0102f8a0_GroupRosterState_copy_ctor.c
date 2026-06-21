// addr: 0x0102f8a0
// name: GroupRosterState_copy_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GroupRosterState_copy_ctor(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs the group roster state by initializing GroupMember and
                       Invitation lists, copying scalar state, then adding non-duplicate group
                       members and invitations from the source. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01636b16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SoeUtil_List_GroupMember_8_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  SoeUtil_List_Invitation_8_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(param_1 + 0x109c) = *(undefined4 *)(param_2 + 0x109c);
  *(undefined1 *)(param_1 + 0x10a0) = *(undefined1 *)(param_2 + 0x10a0);
  *(undefined4 *)(param_1 + 0x1098) = *(undefined4 *)(param_2 + 0x1098);
  for (piVar1 = *(int **)(param_2 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x34]) {
    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x109c)) {
      for (piVar3 = *(int **)(param_1 + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x34]) {
        if ((*piVar3 == *piVar1) && (piVar3[1] == piVar1[1])) {
          if (piVar3 != (int *)0x0) goto LAB_0102f958;
          break;
        }
      }
      FUN_0102dee0(piVar1);
    }
LAB_0102f958:
  }
  iVar2 = *(int *)(param_2 + 0x6f0);
  do {
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    iVar4 = *(int *)(param_1 + 0x6f0);
    if (iVar4 != 0) {
      do {
        if ((*(int *)(iVar4 + 0x90) == *(int *)(iVar2 + 0x90)) &&
           (*(int *)(iVar4 + 0x94) == *(int *)(iVar2 + 0x94))) goto LAB_0102f9b0;
        iVar4 = *(int *)(iVar4 + 0x128);
      } while (iVar4 != 0);
    }
    FUN_0102dc70(iVar2);
LAB_0102f9b0:
    iVar2 = *(int *)(iVar2 + 0x128);
  } while( true );
}

