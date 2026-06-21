// addr: 0x0076f2d0
// name: FUN_0076f2d0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0076f2d0(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a 0x30-byte helper structure on the owner and forwards
                       parameters to a setup routine. No class or string evidence identifies the
                       helper safely. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155734b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x220) == 0) {
    piVar1 = Mem_Alloc(0x30);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
    }
    *(int **)(param_1 + 0x220) = piVar1;
  }
  local_4 = 0xffffffff;
  FUN_0076b9d0(*(void **)(param_1 + 0x220),param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return;
}

