// addr: 0x00c8a5b0
// name: CraftingRecipeRequirement_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CraftingRecipeRequirement_getColumnName(void * this, int columnIndex_)
    */

char * __thiscall CraftingRecipeRequirement_getColumnName(void *this,int columnIndex_)

{
  uint uVar1;
  
                    /* Thiscall column mapper for crafting recipe requirements; base columns include
                       ID, component count/filter, tint and item definition id, with dynamic
                       component columns returning Has Component. */
  if ((9 < (uint)columnIndex_) &&
     (uVar1 = (*(code *)**(undefined4 **)this)(), (uint)columnIndex_ < uVar1)) {
    return "Has Component";
  }
  switch(columnIndex_) {
  case 0:
    return "ID";
  case 1:
    return "Name";
  case 2:
    return "Icon ID";
  case 3:
    return "Description";
  case 4:
    return "Members Only";
  case 5:
    return "Component Count";
  case 6:
    return "Filter Type";
  case 7:
    return "Tint Value";
  case 8:
    return "Item Definition Id";
  case 9:
    return "Passes Requirement";
  default:
    return "<error>";
  }
}

