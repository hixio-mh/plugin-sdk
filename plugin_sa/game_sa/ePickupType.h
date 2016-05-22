#pragma once

enum ePickupType
{
  PICKUP_NONE = 0x0,
  PICKUP_IN_SHOP = 0x1,
  PICKUP_ON_STREET = 0x2,
  PICKUP_ONCE = 0x3,
  PICKUP_ONCE_TIMEOUT = 0x4,
  PICKUP_ONCE_TIMEOUT_SLOW = 0x5,
  PICKUP_COLLECTABLE1 = 0x6,
  PICKUP_IN_SHOP_OUT_OF_STOCK = 0x7,
  PICKUP_MONEY = 0x8,
  PICKUP_MINE_INACTIVE = 0x9,
  PICKUP_MINE_ARMED = 0xA,
  PICKUP_NAUTICAL_MINE_INACTIVE = 0xB,
  PICKUP_NAUTICAL_MINE_ARMED = 0xC,
  PICKUP_FLOATINGPACKAGE = 0xD,
  PICKUP_FLOATINGPACKAGE_FLOATING = 0xE,
  PICKUP_ON_STREET_SLOW = 0xF,
  PICKUP_ASSET_REVENUE = 0x10,
  PICKUP_PROPERTY_LOCKED = 0x11,
  PICKUP_PROPERTY_FORSALE = 0x12,
  PICKUP_MONEY_DOESNTDISAPPEAR = 0x13,
  PICKUP_SNAPSHOT = 0x14,
  PICKUP_2P = 0x15,
  PICKUP_ONCE_FOR_MISSION = 0x16,
};
