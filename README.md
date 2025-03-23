# Profile Completion

A Backdrop CMS module that allows administrators to configure fields for calculating and displaying the user's profile completion percentage. Ideal for community sites or organizations to encourage users to complete their profiles.

## Features

- **Progress Bar:** Visual representation of the profile completion percentage.
- **Configurable Fields:** Select which fields to include in the completion calculation.
- **Completion Block:** Displays the completion percentage and progress bar on the user's profile page or wherever needed via a customizable block.
- **Motivational Messaging:** Encourages users to complete their profiles.
- **Privacy:** Only visible to the user viewing their own profile.

  ![image](https://github.com/user-attachments/assets/c2cb9b1f-967a-4bae-90a6-6aa4ac79bdc2)

## Requirements

- Backdrop CMS 1.x

## Installation
![image](https://github.com/user-attachments/assets/ed7a9976-2a18-42cd-a4f2-9297fab8f57d)

1. Download the `profile_completion` module and extract it into your Backdrop modules directory (e.g., `/modules/profile_completion`).
2. Enable the module at `admin/modules`.
3. Configure the module at `admin/config/people/profile_completion`.

## Configuration

1. Navigate to `admin/config/people/profile_completion`.
2. In the **"Fields for Profile Completion"** section, select the fields to be included in the completion calculation.
3. Save the configuration.

The module will then use these fields to calculate each user's profile completion percentage.

> **Note:** The module currently does not support fields with conditional dependencies; fields must be general and applicable to all user roles.

## Usage

Add the **"Profile Completion "** block in the profile or wherever you want and this block shows:

- The completion percentage (e.g., "Your profile is 43% complete").
- A progress bar indicating the completion level.
- A motivational message if not 100% complete (e.g., "Complete your profile to reach 100%!").
- A button to edit the profile if not 100% complete.
- When 100% complete, a congratulatory message and a green progress bar.

## License

This module is licensed under the **GNU General Public License v2.0**.

## Contributing

Feel free to submit issues or pull requests on GitHub! Contributions are welcome.

## Current Maintainers

- [Alejandro faicán]( https://github.com/willow-fp )
  
Seeking additional maintainers.

## Credits
Developed by willow-fp
