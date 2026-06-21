// addr: 0x00841d00
// name: FUN_00841d00
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00841d00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x1c-byte render-state descriptor triple and registers it in a
                       table via FUN_008372d0. The repeated generic pattern lacks class/file
                       evidence, so no safe specific name is proposed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156eb6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = Mem_Alloc(0x1c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    *piVar1 = param_1;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
  }
  local_4 = 0xffffffff;
  FUN_008372d0((&DAT_01b34f8c)[*piVar1 * 4],piVar1);
  ExceptionList = local_c;
  return;
}

