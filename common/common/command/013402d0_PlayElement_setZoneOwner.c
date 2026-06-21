// addr: 0x013402d0
// name: PlayElement_setZoneOwner
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_setZoneOwner(void * this, int zoneOwner_) */

void __thiscall PlayElement_setZoneOwner(void *this,int zoneOwner_)

{
                    /* Stores a zone/owner value into the PlayElement field at +0x40. It is called
                       from Card_setZoneOwnerFromParent, AddElementState_addElementToPlayer, and
                       play-area creation paths. */
  *(int *)((int)this + 0x40) = zoneOwner_;
  return;
}

