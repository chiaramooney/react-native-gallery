import React from 'react';
import {StyleSheet, View, Text, Image} from 'react-native';

const styles = StyleSheet.create({
  badgeContainer: {
    height: 24,
    width: 220,
    borderRadius: 2,
    flexDirection: 'row',
    alignItems: 'center',
    justifyContent: 'center',
    backgroundColor: '#E6E6E6',
  },
  badgeText: {
    fontSize: 14,
    fontWeight: '400',
    color: '#505050',
    paddingRight: 4,
  },
  badgeIcon: {
    width: 14,
    resizeMode: 'contain',
  },
});

export function NativeControlBadge() {
  return (
    <View
      style={styles.badgeContainer}
      tooltip="This component wraps a native Windows XAML control: its visual appearance, animations, etc. will always match its native Windows counterpart.">
      <Text style={styles.badgeText}>Wrapped Windows Control</Text>
      <Image
        style={styles.badgeIcon}
        source={require('../assets/monitor_icon.png')}
      />
    </View>
  );
}
