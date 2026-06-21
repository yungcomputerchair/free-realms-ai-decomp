// addr: 0x01340230
// name: FUN_01340230
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01340230(void * playElement, int ownerOrParent_) */

bool __thiscall FUN_01340230(void *this,void *playElement,int ownerOrParent_)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Initializes relationship/index fields on a play element, registers it with a
                       computed id, and caches a derived handle. The exact class/method is not
                       evident. */
  *(void **)((int)this + 0x30) = playElement;
  iVar1 = FUN_0135ff50(*(undefined4 *)((int)this + 0x40));
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(int *)((int)this + 0x34) = iVar2 + iVar1;
  Game_addElementToMap(iVar2 + iVar1,this);
  uVar3 = StateMachine_getCurrentState();
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return true;
}

