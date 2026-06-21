// addr: 0x007378c0
// name: FUN_007378c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_007378c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* Graphics command wrapper: computes/allocates a GraphicsDriver command record,
                       queues it through FUN_00745a70, then forwards to the underlying
                       graphics-driver command helper. No exact command name evidence, so left
                       unnamed. */
  uVar1 = FUN_00fac2f0(param_3,param_4);
  FUN_00745a70(uVar1);
  FUN_00fad190(param_1,param_2,param_3,param_4);
  return;
}

