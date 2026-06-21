// addr: 0x01348690
// name: Card_clearPlayAreaReferences
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Card_clearPlayAreaReferences(void * this, void * element) */

int __thiscall Card_clearPlayAreaReferences(void *this,void *element)

{
  undefined3 extraout_var;
  
                    /* Invokes a card virtual method for the supplied element, then removes matching
                       references from play areas; returns true. */
  (**(code **)(*(int *)this + 0x168))(element);
  Card_clearActionReferencesToElement(this,element);
  return CONCAT31(extraout_var,1);
}

