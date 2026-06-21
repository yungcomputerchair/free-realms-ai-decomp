// addr: 0x01390060
// name: Card_applyArchetypeProperty
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_applyArchetypeProperty(void * this, int propertyId_) */

void __thiscall Card_applyArchetypeProperty(void *this,int propertyId_)

{
  int *piVar1;
  char cVar2;
  
                    /* For non-prototype cards, ensures archetype/instance data exists, asks the
                       archetype whether the property applies, and if so applies the property to the
                       card. */
  cVar2 = (**(code **)(*(int *)this + 0x1e8))();
  if (cVar2 == '\x01') {
    return;
  }
  if (*(int *)((int)this + 100) == 0) {
    Game_logGeneralFormatted
              (*(undefined4 *)((int)this + 0x30),"Instance data was NULL on %d and mPIS=%d",
               *(undefined4 *)((int)this + 0x34),*(undefined1 *)((int)this + 0x68));
    FUN_012f5dc0("Couldn\'t get instanceData for card: %d (%d)",*(undefined4 *)((int)this + 0x34),
                 *(undefined4 *)((int)this + 0x60));
  }
  piVar1 = *(int **)((int)this + 100);
  if (piVar1 == (int *)0x0) {
    FUN_012f5a60("archetype","..\\common\\common\\game\\Card.cpp",0x8b2);
  }
  cVar2 = (**(code **)(*piVar1 + 0x68))(propertyId_);
  if (cVar2 == '\0') {
    return;
  }
  Card_checkModifierPredicate68(this,(void *)propertyId_,propertyId_);
  return;
}

