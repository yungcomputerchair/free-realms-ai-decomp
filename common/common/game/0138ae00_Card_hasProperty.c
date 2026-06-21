// addr: 0x0138ae00
// name: Card_hasProperty
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasProperty(void * this, int propertyId_, int propertyIndex_) */

bool __thiscall Card_hasProperty(void *this,int propertyId_,int propertyIndex_)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  
                    /* Checks this card's property set for a property, and if absent on a
                       non-prototype card consults archetype FSD data. Logs when the card FSD cannot
                       be found. */
  cVar1 = (**(code **)(*(int *)this + 0x1e8))();
  if ((cVar1 == '\0') && (*(int *)((int)this + 100) == 0)) {
    FUN_012f5a60("mArchetype","..\\common\\common\\game\\Card.cpp",0xd21);
  }
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mPropertySet",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/HasProperties.h"
                 ,0x36);
  }
  cVar2 = FUN_01311260(propertyId_,propertyIndex_);
  if ((cVar2 == '\0') && (cVar1 == '\0')) {
    iVar4 = (**(code **)(**(int **)((int)this + 100) + 0x38))();
    if (iVar4 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar4 + 4) + 0xc))(propertyId_,propertyIndex_);
      return (bool)uVar3;
    }
    WAErrorLog_write("Couldn\'t get FSD for card %d, %d");
  }
  return (bool)cVar2;
}

