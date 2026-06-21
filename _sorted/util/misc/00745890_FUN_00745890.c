// addr: 0x00745890
// name: FUN_00745890
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_00745890(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* Initializes a graphics command buffer/batch object from a driver vtable
                       result and reserves command storage based on GraphicsDriver_CommandCall_size.
                        */
  uVar1 = (**(code **)(*param_2 + 0x98))();
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = GraphicsDriver_CommandCall_size();
  FUN_00fac230(iVar2 + 0x1000);
  return param_1;
}

