// addr: 0x0131b3d0
// name: StateObject_forwardConvertedValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateObject_forwardConvertedValue(void * this, int value_) */

void __thiscall StateObject_forwardConvertedValue(void *this,int value_)

{
  int iVar1;
  void *pvVar2;
  int in_EDX;
  
                    /* Converts the argument through FUN_01357a00 and forwards the result to this
                       object's virtual slot 0x48. No class or method string is available. */
  iVar1 = *(int *)this;
  pvVar2 = find_play_element_in_maps(*(void **)((int)this + 0xc),in_EDX);
  (**(code **)(iVar1 + 0x48))(pvVar2);
  return;
}

