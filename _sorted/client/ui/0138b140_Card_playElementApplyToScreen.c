// addr: 0x0138b140
// name: Card_playElementApplyToScreen
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_playElementApplyToScreen(void * this, void * element) */

void __thiscall Card_playElementApplyToScreen(void *this,void *element)

{
  int *piVar1;
  
                    /* Casts a PlayElement to Card, invokes a Card virtual operation with this
                       object, then calls this object's vfunc +0x150. Exact screen/controller class
                       is unknown. */
  piVar1 = (int *)FUN_00d8d382(element,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x184))(this,0);
  }
  (**(code **)(*(int *)this + 0x150))();
  return;
}

