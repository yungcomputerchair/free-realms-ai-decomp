// addr: 0x012faf70
// name: FUN_012faf70
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_012faf70(void *param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Reads a nullable component pointer from the packet stream: first a null flag,
                       then a packed component factory id, instantiates through ComponentFactory,
                       deserializes via vtable +0x24, and stores/replaces the output pointer. This
                       clone has no class-specific evidence in the context. */
  bVar1 = Deserializer_readInteger(param_1,&local_8);
  if (!bVar1) {
    return bVar1;
  }
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_2)(1);
    *param_2 = 0;
  }
  if (local_8 != 0) {
    *param_2 = 0;
    return true;
  }
  bVar1 = PacketBuffer_readPackedUInt(param_1,&uStack_4,unaff_EDI);
  if (!bVar1) {
    return bVar1;
  }
  ComponentFactory_initSingleton();
  piVar3 = (int *)(**(code **)*extraout_EAX)(uStack_4);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar3 + 0x24))(param_1);
  *param_2 = (int)piVar3;
  return (bool)uVar2;
}

