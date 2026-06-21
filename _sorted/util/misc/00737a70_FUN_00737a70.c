// addr: 0x00737a70
// name: FUN_00737a70
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00737a70(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* Graphics command wrapper: computes/allocates a GraphicsDriver command record,
                       queues it through FUN_00745a70, then forwards to the underlying
                       graphics-driver command helper. No exact command name evidence, so left
                       unnamed. */
  uVar1 = FUN_00fabc10(param_1);
  FUN_00745a70(uVar1);
  FUN_00fabba0(param_1);
  return;
}

