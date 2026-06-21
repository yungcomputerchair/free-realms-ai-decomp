// addr: 0x01231620
// name: FUN_01231620
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01231620(uint param_1)

{
  undefined1 local_c [12];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1c) {
    FUN_00403aad(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_0198d500);
  }
  Mem_Alloc(param_1 * 0x1c);
  return;
}

