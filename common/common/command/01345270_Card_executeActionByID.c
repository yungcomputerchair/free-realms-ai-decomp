// addr: 0x01345270
// name: Card_executeActionByID
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Card_executeActionByID(void * this, int actionID, void * context) */

int Card_executeActionByID(void *this,int actionID,void *context)

{
  void *pvVar1;
  int iVar2;
  int in_EDX;
  
                    /* Looks up a Card action by id and, if found, invokes a virtual action
                       execution/validation method with the supplied context and a true flag. */
  pvVar1 = Card_getActionByID(this,in_EDX);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0xdc))(pvVar1,context,1);
  return iVar2;
}

