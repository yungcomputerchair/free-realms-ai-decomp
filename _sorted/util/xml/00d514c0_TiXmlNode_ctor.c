// addr: 0x00d514c0
// name: TiXmlNode_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlNode_ctor(void * this, int nodeType_) */

void __thiscall TiXmlNode_ctor(void *this,int nodeType_)

{
                    /* Constructs a TinyXML node base, installs TiXmlNode::vftable, initializes
                       line/column, value string, node type, parent, and child/sibling pointers.
                       Evidence: direct TiXmlNode::vftable assignment and TinyXML field layout. */
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = TiXmlNode::vftable;
  *(undefined4 **)((int)this + 0x20) = &DAT_01bf2c00;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(int *)((int)this + 0x14) = nodeType_;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return;
}

