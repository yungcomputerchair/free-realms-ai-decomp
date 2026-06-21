// addr: 0x0138aeb0
// name: Card_clearArchetypeProperty
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_clearArchetypeProperty(void * this, int propertyId_) */

void __thiscall Card_clearArchetypeProperty(void *this,int propertyId_)

{
  char extraout_AL;
  int iVar1;
  
                    /* For non-special property ids, looks up the card archetype FSD and invokes its
                       property removal/clear virtual for the supplied property id. */
  HasProperties_hasProperty(this,(char *)propertyId_);
  if ((extraout_AL == '\0') && (*(int *)((int)this + 100) != 0)) {
    iVar1 = (**(code **)(**(int **)((int)this + 100) + 0x38))();
    if (iVar1 == 0) {
      FUN_012f5a60(&DAT_018dd0b8,"..\\common\\common\\game\\Card.cpp",0xd3c);
    }
    (**(code **)(*(int *)(iVar1 + 4) + 0x14))(propertyId_);
  }
  return;
}

