// addr: 0x012b0b10
// name: FUN_012b0b10
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_012b0b10(uint param_1)

{
  undefined1 local_c [12];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    FUN_00403aad(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_0198d500);
  }
  Mem_Alloc(param_1 * 4);
  return;
}

