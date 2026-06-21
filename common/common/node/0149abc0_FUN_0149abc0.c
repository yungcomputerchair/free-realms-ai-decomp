// addr: 0x0149abc0
// name: FUN_0149abc0
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0149abc0(int param_1,void *param_2)

{
  void *this;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  this = (void *)(param_1 + 4);
  if (this != param_2) {
    FUN_01456fc0(local_8,this,**(undefined4 **)(param_1 + 8),this,*(undefined4 **)(param_1 + 8));
    IntPointerMap_copyTreeFrom(this,param_2);
  }
  return;
}

