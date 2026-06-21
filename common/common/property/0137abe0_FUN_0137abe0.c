// addr: 0x0137abe0
// name: FUN_0137abe0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_0137abe0(void *param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Generated nullable component-pointer deserializer using the ComponentFactory
                       singleton and a packed type id. It clears an existing pointer, handles the
                       null marker, constructs the component, invokes deserialize, and stores it. */
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

