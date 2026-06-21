// addr: 0x0149a820
// name: FUN_0149a820
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall FUN_0149a820(void *param_1,void *param_2)

{
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_1 != param_2) {
    FUN_01456fc0(local_8,param_1,**(undefined4 **)((int)param_1 + 4),param_1,
                 *(undefined4 **)((int)param_1 + 4));
    IntPointerMap_copyTreeFrom(param_1,param_2);
  }
  return param_1;
}

