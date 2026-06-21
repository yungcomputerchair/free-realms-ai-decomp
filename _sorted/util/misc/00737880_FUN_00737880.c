// addr: 0x00737880
// name: FUN_00737880
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00737880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* Graphics command wrapper: computes/allocates a GraphicsDriver command record,
                       queues it through FUN_00745a70, then forwards to the underlying
                       graphics-driver command helper. No exact command name evidence, so left
                       unnamed. */
  uVar1 = FUN_00fac2e0(param_3);
  FUN_00745a70(uVar1);
  FUN_00fad0f0(param_1,param_2,param_3);
  return;
}

