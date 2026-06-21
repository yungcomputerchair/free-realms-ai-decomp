// addr: 0x01418e80
// name: AttributeModifier_removeFromTarget
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AttributeModifier_removeFromTarget(void * this) */

void __fastcall AttributeModifier_removeFromTarget(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* Removes or detaches this AttributeModifier from its current target/context by
                       forwarding an owner/target id pair to two lower-level removal helpers. */
  uVar2 = *(undefined4 *)(*(int *)((int)this + 0x30) + 0x20);
  uVar1 = *(undefined4 *)((int)this + 0x4c);
  ActionDB_ensureSingleton();
  ActionDB_getAction(uVar1,uVar2);
  return;
}

