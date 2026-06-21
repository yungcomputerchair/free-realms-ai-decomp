// addr: 0x0138a1c0
// name: Card_setZoneOwnerFromParent
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_setZoneOwnerFromParent(void * this, void * parent, int ownerId) */

bool __thiscall Card_setZoneOwnerFromParent(void *this,void *parent,int ownerId)

{
  int unaff_EDI;
  
                    /* Copies a parent field at +0x20 into this object's +0x5c, writes an owner/id
                       field on another object, then links the parent with FUN_01340230. The class
                       and exact semantic name are uncertain. */
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)parent + 0x20);
  PlayElement_setZoneOwner(this,ownerId);
  FUN_01340230(this,parent,unaff_EDI);
  return true;
}

